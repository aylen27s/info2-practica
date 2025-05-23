// using namespace std;
class Punto{
    private:
        double mx, my;
        void controlRange(double* x, double* y);

    public:
        Punto();
        Punto( double x, double y=0);
        Punto( Punto &p  );
        ~Punto();
        void setPunto( double x, double y );
        void setPunto( Punto p );
        Punto* getPunto();
        void setX(double x);
        void setY(double y);
        double getX();
        double getY();
        double Distancia(Punto P1);

        // void operator=(Punto p);

        Punto operator+(Punto p);
        Punto operator-(Punto p);

        //No son metodos de la clase
        friend Punto operator+(int a, Punto p); 
        friend Punto operator-(int a, Punto p);

        //Sobrecarga de otros operadores
        bool operator==(Punto p);
        bool operator!=(Punto p);
        bool operator>(Punto p);
        bool operator<(Punto p);


        friend std::ostream& operator<<(std::ostream& os, Punto& _p);
        friend std::istream& operator>>(std::istream& is, Punto& _p);

        
};