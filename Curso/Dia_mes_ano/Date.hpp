class Date{
    private:
    int day, month, year;

    public:
    Date(int = 01, int = 01, int = 1972);
    ~Date();

    int get_day();
    int get_month();
    int get_year();

    void set_day(int);
    void set_month(int);
    void set_year(int);
    void imprime();
};