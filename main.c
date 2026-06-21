#include "YTM32B1MC0.h"
#include "system_YTM32B1MC0.h"

void delay(uint32_t count) {
    while(count--) __NOP();
}

int main(void)
{
    // 系统初始化（时钟、看门狗等）
    SystemInit();
    
    // 配置PTD5、PTD6、PTD7为GPIO输出
    PCTRLD->PCR[5] = PCTRL_PCR_MUX(1);
    PCTRLD->PCR[6] = PCTRL_PCR_MUX(1);
    PCTRLD->PCR[7] = PCTRL_PCR_MUX(1);
    
    GPIOD->POER |= (1 << 5) | (1 << 6) | (1 << 7);
    GPIOD->PCOR = (1 << 5) | (1 << 6) | (1 << 7);
    
    while(1)
    {
        GPIOD->PSOR = (1 << 5) | (1 << 6) | (1 << 7);
        GPIOD->PCOR = (1 << 5) | (1 << 6) | (1 << 7);
    }
}

int main(void)
{
    SystemInit();
    
    PCT
}
