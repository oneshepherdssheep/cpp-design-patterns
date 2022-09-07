//
// Created by oneshepherdssheep on 07/09/22.
//

#ifndef CPP_DESIGN_PATTERNS_EVENT_H
#define CPP_DESIGN_PATTERNS_EVENT_H

#include <iostream>
#include <cstdint>

/**
 *
 */
class Event {
public:
    explicit Event(uint16_t id);
    virtual ~Event();
    uint16_t GetId() const;
private:
    uint16_t id_m;
};

namespace audio_fx_event {

    /**
     *
     */
    enum FxSongId : std::uint16_t {
        FX_TEST_SONG,
        FX_MENU_ITEM_SELECTED_SONG,
        FX_MENU_ITEM_VALIDATED_SONG,
        FX_UNIT_SELECTED_SONG,
        // please add all song id above
        FX_SONG_COUNT,
    };

    /**
     *
     */
    class AudioFxEvent : public Event {
    public:
        AudioFxEvent();
        AudioFxEvent(uint16_t id, FxSongId audioSongId);
        ~AudioFxEvent();
        FxSongId GetFXSongID() const;
    private:
        FxSongId audioSongId_m;
    };
}

#endif //CPP_DESIGN_PATTERNS_EVENT_H
