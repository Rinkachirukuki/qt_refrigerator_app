#ifndef REFRIGERATIONUNIT_H
#define REFRIGERATIONUNIT_H


class RefrigerationUnit
{
public:
    RefrigerationUnit();

    void TurnOnMotor();
    void TurnOffMotor();

    void BreakDownMotor();
    void FixMotor();


    bool GetIsEnabled();
    bool GetIsBroken();

private:
    bool isEnabled;
    bool isBroken;
};

#endif // REFRIGERATIONUNIT_H
