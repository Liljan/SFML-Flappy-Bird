#pragma once

#include "State.h"

#include <memory>
#include <stack>

namespace Sonar
{
	typedef std::unique_ptr<State> StateRef;

	class StateMachine
	{
	public:

		StateMachine() = default;
		~StateMachine() = default;

		void AddState(StateRef state, bool isReplacing = true);
		void RemoveState();

		void ProcessStateChanges();

		StateRef& GetActiveState();

	private:

		std::stack<StateRef> _states;
		StateRef _newState;

		bool _isRemoving;
		bool _isAdding;
		bool _isReplacing;
	};
}