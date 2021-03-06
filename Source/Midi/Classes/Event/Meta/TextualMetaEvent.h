// Copyright 2011 Alex Leffelman
// Updated 2016 Scott Bishel

#pragma once

#include "MetaEvent.h"

/**
 *	Abstract Meta Text Event
 */
class MIDI_API TextualMetaEvent : public MetaEvent
{
protected:
	string mText;

	TextualMetaEvent(long tick, long delta, int type, string text);
	virtual ~TextualMetaEvent() = 0;

public:
	void setText(string t);
	string getText();

protected:
	int getEventSize();

public:
	void writeToFile(FMemoryWriter & output);
	int CompareTo(MidiEvent *other);
	string ToString();
};
