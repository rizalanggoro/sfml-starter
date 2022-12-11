## Persiapan

- Tambahkan `path_ke_folder_sfml/include` ke `.vscode/c_cpp_properties.json` pada bagian `includePath`.

  Contoh :<br>

  ```json
  "includePath": [
    "${workspaceFolder}/**", "D:\\sdk\\SFML-gcc\\include",
  ]
  ```

- Install MinGW Builds 7.3.0 (64-bit) melalui link [berikut.](https://sourceforge.net/projects/mingw-w64/files/Toolchains%20targetting%20Win64/Personal%20Builds/mingw-builds/7.3.0/threads-posix/seh/x86_64-7.3.0-release-posix-seh-rt_v5-rev0.7z/download)
- Ekstrak file `.7z` menggunakan winrar atau sejenisnya, kemudian pindahkan ke folder `C:/` atau lainnya.
- Tambahkan `path_ke_folder_mingw-7.3.0/bin` ke `Environment Variables` pada bagian `Path`.

  Contoh : `D:\application\mingw64\bin`

- Untuk bisa mengeksekusi file `Makefile`, lakukan rename pada file `path_ke_folder_mingw-7.3.0/bin/mingw32-make.exe` diubah menjadi `make.exe`.

## Cara menjalankan program

- Untuk mengcompile file `main.cpp` menjadi file `main.o`, buka terminal lalu ketik perintah `make compile`. Maka akan dibuat file baru bernama `main.o`.
- Untuk menghubungkan file `main.o` dengan library SFML, ketik perintah `make link`. Maka akan dibuat file baru bernama `main.exe`.
- Untuk menjalankan file `main.exe` bisa menggunakan File Explorer atau bisa menggunakan terminal dengan perintah `./main.exe` atau `.\main.exe` atau `make run`.
- Untuk menghapus atau membersihkan file `main.exe`, `main.o`, jalankan perinttah `make clean`.
- Untuk menjalankan semua perintah, mulai dari compile hingga run, cukup ketik perintah `make`.

## Error

Program tidak bisa dijalankan? Pastikan telah menambahkan semua file `*.dll` yang terdapat pada `path_ke_folder_sfml/bin` ke folder root project.
