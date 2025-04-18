class Punto{
    private:
        double mx, my;

    public:
        Punto();
        Punto( double x, double y);
        ~Punto();
        void setPunto( double x, double y );
        Punto* getPunto();
        void setX(double x);
        void setY(double y);
        double getX();
        double getY();

        void operator=(Punto* p);
};