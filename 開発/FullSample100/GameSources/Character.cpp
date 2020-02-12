/*!
@file Character.cpp
@brief キャラクターなど実体
*/

#include "stdafx.h"
#include "Project.h"

namespace basecross{
	void Boxp::OnCreate() {
		auto Drow = AddComponent<PNTStaticDraw>();
		Drow->SetMeshResource(L"DEFAULT_CUBE");

		auto trans = GetComponent<Transform>();
		trans->SetPosition(Vec3(0, 0, 0));
		trans->SetScale(Vec3(1, 1, 1));
	}

}
//end basecross
