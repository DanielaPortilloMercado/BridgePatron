#include "TV.h"
#include "Radio.h"
#include "TVBox.h"
#include "RemoteControl.h"
#include "AdvancedRemoteControl.h"

int main() {
    Tv tv;
    RemoteControl remote(&tv);
    remote.togglePower();
    remote.volumeUp();

    Radio radio;
    AdvancedRemoteControl advancedRemote(&radio);
    advancedRemote.togglePower();
    advancedRemote.volumeUp();
    advancedRemote.mute();

    TVBox tvBox;
    AdvancedRemoteControl advancedRemoteTvBox(&tvBox);
    advancedRemoteTvBox.togglePower();
    advancedRemoteTvBox.setService("Netflix");
    advancedRemoteTvBox.setMovie("Inception");

    return 0;
}
