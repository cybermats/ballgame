//
// Created by mats on 4/17/19.
//

#pragma once


#include <vector>
#include "sceneobject.h"

class SceneState {
public:
    bool update(const clock_type& now) {
      if (isActive(now)) {
        return false;
      }

    }

    bool isActive(const clock_type& now) {
      return now < m_current_end;
    }

private:
    std::vector<SceneObject> m_objects;
    std::vector<clock_type> m_ends;
    clock_type m_current_end;
};


