#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include <random>

using namespace sf;

int main()
{
    // Создаем окно
    RenderWindow win(VideoMode(1920, 1080), "lol");

     // Загружаем иконку
    Image icon;
    if (!icon.loadFromFile("icon.png")) {
        std::cerr << "Error(icont" << std::endl;
        return -1;
    }
    win.setIcon(512, 512, icon.getPixelsPtr());

    // Загружаем текстуру игровой панели
    Texture texture;
    if (!texture.loadFromFile("icon.png")) {
        std::cout << "Error(panel is undefined)" << std::endl;
        return -1;
    }
    Sprite GamePanel;
    GamePanel.setTexture(texture);


    Texture Snow;
    if (!Snow.loadFromFile("huy.png")) {
        std::cout << "Error(Snow is undefined)" << std::endl;
        return -1;
    }

    std::vector<Sprite> snowBall;
    const int num = 100;
    std::random_device rd;
    std::mt19937 gen(rd()); // Инициализация генератора
    std::uniform_real_distribution<> disX(0, 1920); // Для координаты X
    std::uniform_real_distribution<> disY(0, 1080);


    for(int i =0;i<num;i++){
        Sprite snow;
        snow.setTexture(Snow);
        float x = disX(gen);
        float y = disY(gen);

        snow.setPosition(x,y);

        snowBall.push_back(snow);

    }

    // Загружаем текстуру фона
    Texture textureBackSpace;
    if (!textureBackSpace.loadFromFile("zz.jpg")) {
        std::cerr << "Error(texture is undefined)" << std::endl;
        return -1;
    }
    // 1 cтруктура
    RectangleShape BackSpace(Vector2f(1920, 1080));
    BackSpace.setTexture(&textureBackSpace);
    BackSpace.setPosition(Vector2f(0, 0));
    // 2 структура
    RectangleShape BackSpace2(Vector2f(1920, 1080));
    BackSpace2.setTexture(&textureBackSpace);
    BackSpace2.setPosition(Vector2f(1920, 0)); // Позиция второго фона

    Vector2f pos;
    float time;
    bool isTrue = true;
    float duration = 5.0f;
    float speed = 5.0f;
        Clock clock;
    std::vector<float> disappearTimes(num, 0.0f);
    std::vector<float> randomDelays(num);

    for (int i = 0; i < num; i++) {
        randomDelays[i] = static_cast<float>(rand() % 5 + 1); // от 1 до 5 секунд
    }

    // Главный цикл приложения
    while (win.isOpen()) {
        Event event;
        while (win.pollEvent(event)) {
            if (event.type == Event::Closed) {
                win.close();
            }
        }

        float deltaTime = clock.restart().asSeconds(); // Получаем время с последнего обновления

        win.clear();


        for (size_t i = 0; i < snowBall.size(); i++) {
            Sprite& snowflake = snowBall[i];
            disappearTimes[i] += deltaTime;

            if (disappearTimes[i] > randomDelays[i]) {
                float x = disX(gen);
                float y = disY(gen); // Случайная позиция для Y
                snowflake.setPosition(x, y); // Появление в случайной позиции
                disappearTimes[i] = 0; // Сброс таймера
                randomDelays[i] = static_cast<float>(rand() % 5 + 1); // Новая случайная задержка
            }

            // Проверка, не вышла ли снежинка за пределы экрана
            if (snowflake.getPosition().y > 1080) {
                snowflake.setPosition(disX(gen), -50); // Возвращаем снежинку в верхнюю часть
            }

            win.draw(snowflake); // Рисуем снежинку
        }

        win.display(); // Отображаем все на экране после всех отрисовок
    }
}

