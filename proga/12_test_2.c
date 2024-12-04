#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include <random>

using namespace sf;

int main()
{
    // Создаем окно
    RenderWindow win(VideoMode(1920, 1080), "Snowfall");

    // Загружаем иконку
    Image icon;
    if (!icon.loadFromFile("icon.png")) {
        std::cerr << "Error(icon)" << std::endl;
        return -1;
    }
    win.setIcon(512, 512, icon.getPixelsPtr());

    // Загружаем текстуру снежинок
    Texture snowTexture;
    if (!snowTexture.loadFromFile("huy.png")) {
        std::cout << "Error(Snow is undefined)" << std::endl;
        return -1;
    }

    std::vector<Sprite> snowflakes;
    const int num = 100;
    std::random_device rd;
    std::mt19937 gen(rd()); // Инициализация генератора
    std::uniform_real_distribution<> disX(0, 1920); // Для координаты X
    std::uniform_real_distribution<> disY(0, 1080); // Для координаты Y

    // Инициализация снежинок
    for (int i = 0; i < num; i++) {
        Sprite snowflake;
        snowflake.setTexture(snowTexture);
        float x = disX(gen);
        float y = disY(gen); // Теперь мы получаем случайную Y
        snowflake.setPosition(x, y); // Позиция задается случайно
        snowflakes.push_back(snowflake);
    }

    // Загружаем текстуру фона
    Texture textureBackSpace;
    if (!textureBackSpace.loadFromFile("zz.jpg")) {
        std::cerr << "Error(texture is undefined)" << std::endl;
        return -1;
    }
    RectangleShape background(Vector2f(1920, 1080));
    background.setTexture(&textureBackSpace);

    // Временные переменные
    std::vector<float> disappearTimes(num, 0.0f); // Время, прошедшее с исчезновения для каждой снежинки
    std::vector<float> randomDelays(num); // Случайные задержки для каждой снежинки
    Clock clock; // Инициализируем один раз
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

        // Очистка окна
        win.clear();
        win.draw(background);

        for (size_t i = 0; i < snowflakes.size(); i++) {
            Sprite& snowflake = snowflakes[i];
            disappearTimes[i] += deltaTime;

            if (disappearTimes[i] > randomDelays[i]) {
                float x = disX(gen);
                float y = disY(gen); // Случайная позиция для Y
                snowflake.setPosition(x, y); // Появление в случайной позиции
                disappearTimes[i] = 0; // Сброс таймера
                randomDelays[i] = static_cast<float>(rand() % 5 + 1); // Новая случайная задержка
            } else {
                snowflake.move(0, 200 * deltaTime); // Перемещение снежинки вниз
            }

            // Проверка, не вышла ли снежинка за пределы экрана
            if (snowflake.getPosition().y > 1080) {
                snowflake.setPosition(disX(gen), -50); // Возвращаем снежинку в верхнюю часть
            }

            win.draw(snowflake); // Рисуем снежинку
        }

        win.display(); // Отображаем все на экране после всех отрисовок
    }

    return 0;
}
