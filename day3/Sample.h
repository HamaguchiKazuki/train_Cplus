#ifndef _SAMPLE_H_
#define _SAMPLE_H_
 
class Sample {
public:
    int a;      //  publicなメンバ変数
private:
    int b;      //  privateなメンバ変数
public:
    void func1(); //publicなメンバ関数
private:
    void func2(); // privateなメンバ関数
};
 
#endif // _SAMPLE_H_