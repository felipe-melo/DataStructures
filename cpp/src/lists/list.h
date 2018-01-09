template<class T>
class List {

    public:
        virtual void add(T) = 0;
        virtual T *remove(int) = 0;
        virtual int getSize() = 0;
    protected:
        int size;
};