#ifndef __HARL_HPP
#define __HARL_HPP
#include <string>
class Harl
{
private:
    enum {FUNC_NUM = 4};
    typedef void (Harl::*FUNC_PTR)(void);

    FUNC_PTR    _funcArry[FUNC_NUM];
    std::string _funcName[FUNC_NUM];
private:
    void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);
public:
    Harl();
    void    complain(std::string level);
};
#endif