#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;
using namespace std;

int main()
{
  // membuat sebuah window baru
  RenderWindow window(VideoMode(1280, 720), "SFML | Starter Template", Style::Close);

  // membatasi frame rate
  window.setFramerateLimit(60);

  // membuat font face
  Font font{};

  // path terhadap assets bersifat relatif terhadap root project
  // karena project akan di compile menjadi main.exe
  // yang terletak di folder root project
  if (!font.loadFromFile("assets/fonts/Poppins-Regular.ttf"))
  {
    cout << "Gagal memuat font" << endl;
    return -1;
  }

  // membuat sebuah text
  Text text{};
  text.setString("Starter template");
  text.setFillColor(Color::Red);
  text.setFont(font);
  text.setCharacterSize(32);

  // memindah posisi text ke tengah canvas
  Vector2f textPosition{};
  textPosition.x = (window.getView().getCenter().x - (text.getLocalBounds().width / 2));
  textPosition.y = (window.getView().getCenter().y - (text.getLocalBounds().height / 2));
  text.setPosition(textPosition);

  // loop jika window masih dibuka
  while (window.isOpen())
  {
    Event event{};
    // mendeteksi jika terdapat event seperti close, mouse, key press, dll
    while (window.pollEvent(event))
    {
      if (event.type == Event::Closed)
        window.close();
    }

    // menghapus canvas lama
    // window.clear(); -> background secara default berwarna hitam
    window.clear(Color::White); // background akan berwarna putih

    // menggambar canvas
    window.draw(text);

    // menampilkan canvas
    window.display();
  }

  return 0;
}