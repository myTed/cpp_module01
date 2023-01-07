#ifndef __HARL_HPP
#define __HARL_HPP
#include <string>
class Harl
{
private:
    enum {FUNC_NUM = 4};
    typedef enum eComplain {NONE= -1, DEBUG=0, INFO, WARNING, ERROR, COMPLAIN} tComplain;
    std::string _funcName[FUNC_NUM];

private:
    void        debug(void) const;
    void        info(void) const;
    void        warning(void) const;
    void        error(void) const;
    tComplain   getComplainSort(const std::string& level) const;
public:
    Harl();
    void        filter(const std::string& level) const;
};
#endif
