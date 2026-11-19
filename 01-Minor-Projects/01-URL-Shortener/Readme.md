# URL Shortener in C++

A simple URL Shortener project built using C++.

## About the Project

A URL Shortener converts a long URL into a short code. This short code can later be used to retrieve the original URL.

For example:

- Original URL: `https://www.example.com/very/long/page`
- Short URL: `URL1`

## Features

- Shorten a long URL.
- Generate a unique short code.
- Retrieve the original URL using the short code.
- Display a simple menu-based interface.

## Technologies Used

- C++
- `unordered_map`
- `string`
- Object-Oriented Programming (OOP)

## How It Works

1. The user enters a long URL.
2. The program generates a short code such as `URL1`.
3. The program stores the short code and original URL in an `unordered_map`.
4. When the user enters a short code, the program retrieves the original URL.

## Project Structure

```text
01-URL-Shortener/
│
├── main.cpp
└── README.md