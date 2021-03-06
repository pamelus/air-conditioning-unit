#ifndef AIR_CONDITIONING_RECEIVER_AIRCONDITIONER_H
#define AIR_CONDITIONING_RECEIVER_AIRCONDITIONER_H

namespace ACC::Devices {
    /**
     * Interface for AirConditioners device
     */
    class AirConditioner {
        public:
            /** Tries to turn on the AC */
            virtual bool turnOn() = 0;
            /** Tries to turn off the AC */
            virtual bool turnOff() = 0;
            /** Tries to set AC to low speed */
            virtual bool setLowSpeed() = 0;
            /** Tries to set AC to high speed */
            virtual bool setHighSpeed() = 0;
    };
}

#endif //AIR_CONDITIONING_RECEIVER_AIRCONDITIONER_H
