class Punto{
    private:
        double mx, my;
        void controlRange(double* x, double* y);

    public:
        Punto();
        Punto( double x, double y=0 );
        Punto( Punto &p  );
        ~Punto();
        void setPunto( double x, double y );
        void setPunto( Punto p );
        Punto* getPunto();
        void setX(double x);
        void setY(double y);
        double getX();
        double getY();

        void operator=(Punto p);
};