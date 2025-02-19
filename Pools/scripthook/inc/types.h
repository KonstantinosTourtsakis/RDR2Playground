/*
	THIS FILE IS A PART OF RDR 2 SCRIPT HOOK SDK
				http://dev-c.com
			(C) Alexander Blade 2019
*/

#pragma once

#include <windows.h>
#include <cstdint>
#include <unordered_map>
#include <type_traits>

using Any = uint64_t;
using Void = uint64_t;
using ScrHandle = int;

using AnimScene = int;
using Blip = int;
using Cam = int;
using Entity = ScrHandle;
using FireId = int;
using Hash = unsigned int;
using Interior = int;
using ItemSet = ScrHandle;
using Object = ScrHandle;
using Ped = ScrHandle;
using PersChar = ScrHandle;
using Pickup = int;
using Player = unsigned int;
using PopZone = int;
using Prompt = int;
using PropSet = int;
using Vehicle = ScrHandle;
using Volume = ScrHandle;



#define ALIGN8 __declspec(align(8))

struct Vector3
{
	ALIGN8 float x;
	ALIGN8 float y;
	ALIGN8 float z;
	float magnitude() {
		return sqrtf(x*x + y * y + z * z);
	}
	Vector3 normalize() {
		float mag = magnitude();
		Vector3 ret = { x / mag, y / mag, z / mag };
		return ret;
	}
	Vector3 add(Vector3 adder) {
		Vector3 ret = { x + adder.x, y + adder.y, z + adder.z };
		return ret;
	}
	Vector3 sub(Vector3 subtractor) {
		Vector3 ret = { x - subtractor.x, y - subtractor.y, z - subtractor.z };
		return ret;
	}
	Vector3 scale(float scalar) {
		Vector3 ret = { x * scalar, y * scalar, z * scalar };
		return ret;
	}
};

static_assert(sizeof(Vector3) == 24, "");