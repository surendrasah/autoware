/*
 *  Copyright (c) 2018, TierIV, Inc.
 *  All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * v1.0 Yukihiro Saito
 */


#pragma once

#include "lidar_shape_estimation/model_interface.hpp"

class CylinderModel : public ShapeEstimationModelInterface
{
public:
  CylinderModel()
  {
  };

  ~CylinderModel()
  {
  };

  bool estimate(const pcl::PointCloud<pcl::PointXYZ> &cluster, autoware_msgs::DetectedObject &output) override;
};