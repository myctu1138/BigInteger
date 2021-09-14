/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BigInteger.h
 * Author: Мустафа Али
 *
 * Created on 13 май 2020 г., 11:21 ч.
 */

#ifndef BIGINTEGER_H
#define BIGINTEGER_H

#include <string>



class InfInt {
    std::string value;
    bool sign = 0;
public:
    InfInt();
    InfInt(const std::string&);
    InfInt(long int);
    InfInt operator=(long int);
    explicit operator int() const;

    std::string getValue() const;
    bool getSign() const;
    InfInt operator+(const InfInt&) const;
    InfInt operator-(const InfInt&) const;
    InfInt operator*(const InfInt&) const;
    InfInt operator/(const InfInt&) const;
    InfInt operator%(const InfInt&) const;

    bool operator<(const InfInt&) const;
    bool operator>(const InfInt&) const;
    bool operator<=(const InfInt&) const;
    bool operator>=(const InfInt&) const;
    bool operator==(const InfInt&) const;
    void operator+=(const InfInt&);
    void operator-=(const InfInt&);
    void operator++();
    void operator--();
    //void operator++();
    //void operator--();


    //BitWise
    InfInt operator&(const InfInt&) const;
    InfInt operator<<(const InfInt&) const;
    InfInt operator>>(const InfInt& a) const;
    void operator<<=(const InfInt&);
    void operator>>=(const InfInt&);
    void operator&=(const InfInt&);
    InfInt operator^(const InfInt&) const;
    InfInt operator|(const InfInt&) const;




    unsigned long length() const;
    std::string align(const unsigned long) const;
    void initFromBinary(const std::string);

private:

    std::string getBinary() const;
    std::string subtract(const InfInt&) const;
    std::string add(const InfInt&) const;
    void setSign(const bool);
    InfInt alignLeft(const unsigned long) const;

};

std::ostream& operator<<(std::ostream& os, const InfInt&);



#endif /* BIGINTEGER_H */

