#include <iostream>


class Book {
private:
    std::string title; // Titulo del libro.             
    std::string author; // Autor del libro.
    std::string genre; // Genero
    int publicationYear; // Año de publicacion.
    int pageCount; // Total de paginas.
    std::string isbn; // ISBN
    std::string publisher; // Editorial que lo publica.
    double price; // Precio estimado.
    double rating; // Puntaje
    int Readers; // Cantidad de lectores.
    std::string language; // Language del libro.
    std::string format; // Formato
    double readingTime; // Tiempo aproximado de lectura.
    std::string ships; // Ships entre diferentes personajes.
    std::string typeofNarrator; // Tipo de narrador, sea primera, segunda person;a omniciente, multiples puntos de vista.
public:
    void setTitle(const std::string& t) {
        title = t;
    }
    void setAuthor(const std::string& a) {
        author = a;
    }
    void setGenre(const std::string& g) {
        genre = g;
    }
    void setPublicationYear(int y) {
        publicationYear = y;
    }
    void setpageCount(int c) {
        pageCount = c;
    }
    void setISBN(const std::string& i) {
        isbn = i;
    }
    void setPublisher(const std::string& p) {
        publisher = p;
    }
    void setPrice(double p) {
        price = p;
    }
    void setRating(double r) {
        rating = r;
    }
    void setReaders(int v) {
        Readers = v;
    }
    void setLanguage(const std::string& l) {
        language = l;
    }
    void setFormat(const std::string& f) {
        format = f;
    }
    void setreadingTime(double t) {
        readingTime = t;
    }
    void setShips(const std::string& s) {
        ships = s;
    }
    void settypeofNarrator(const std::string& n) {
        typeofNarrator = n;
    }

    //Getters

    std::string getTitle() const{
        return title;
    }
    std::string getAuthor() const{
        return author;
    }
    std::string getGenre() const{
        return genre;
    }
    int getPublicationYear() const {
        return publicationYear;
    }
    int getpageCount()const {
        return pageCount;
    }
    std::string getISBN() const {
        return isbn;
    }
    std::string getPublisher() const {
        return publisher;
    }
    double getPrice() const {
        return price;
    }

    double getRating() const {
        return rating;
    }

    int getReaders() const {
        return Readers;
    }
    std::string getLanguage() const {
        return language;
    }
    std::string getFormat() const {
        return format;
    }
    double getreadingTime() const {
        return readingTime;
    }
    std::string getShips() const {
        return ships;
    }
    std::string getTypeOfNarrator() const {
        return typeofNarrator;
    }
};
int main() {
    Book myBook;

    myBook.setTitle("The Song of Achilles");
    myBook.setAuthor("Madeline Miller");
    myBook.setGenre("Romance/Fantasy/LGBT");
    myBook.setPublicationYear(2011);
    myBook.setpageCount(416);
    myBook.setISBN("9780062060624");
    myBook.setPublisher("Ecco Press");
    myBook.setPrice(300);
    myBook.setRating(4.5);
    myBook.setReaders(2000000);
    myBook.setLanguage("English");
    myBook.setFormat("Hardcover");
    myBook.setreadingTime(5.52);
    myBook.setShips("Achillies x Patroclus");
    myBook.settypeofNarrator("First person to omniscient narrator.");

    std::cout << "Title: " << myBook.getTitle() << std::endl;
    std::cout << "Author: " << myBook.getAuthor() << std::endl;
    std::cout << "Genre: " << myBook.getGenre() << std::endl;
    std::cout << "Publication Year: " << myBook.getPublicationYear() << std::endl;
    std::cout << "Page Count: " << myBook.getpageCount() << std::endl;
    std::cout << "ISBN: " << myBook.getISBN() << std::endl;
    std::cout << "Publisher: " << myBook.getPublisher() << std::endl;
    std::cout << "Price: " << myBook.getPrice() << std::endl;
    std::cout << "Rating: " << myBook.getRating() << std::endl;
    std::cout << "Readers: " << myBook.getReaders() << std::endl;
    std::cout << "Language: " << myBook.getLanguage() << std::endl;
    std::cout << "Format: " << myBook.getFormat() << std::endl;
    std::cout << "Reading time: " << myBook.getreadingTime() << std::endl;
    std::cout << "Ships: " << myBook.getShips() << std::endl;
    std::cout << "Type of Narrator: " << myBook.getTypeOfNarrator() << std::endl;


    return 0;
}


