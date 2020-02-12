/*!
@file Character.h
@brief キャラクターなど
*/

#pragma once
#include "stdafx.h"

namespace basecross{

	class Boxp :public GameObject {
	public:
		Boxp(const shared_ptr<Stage>& stage)
			:GameObject(stage) {

		}
		void OnCreate() override;
	};

}
//end basecross
