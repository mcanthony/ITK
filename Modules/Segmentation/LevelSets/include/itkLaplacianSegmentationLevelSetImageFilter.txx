/*=========================================================================
 *
 *  Copyright Insight Software Consortium
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *         http://www.apache.org/licenses/LICENSE-2.0.txt
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 *=========================================================================*/
#ifndef __itkLaplacianSegmentationLevelSetImageFilter_txx
#define __itkLaplacianSegmentationLevelSetImageFilter_txx

#include "itkLaplacianSegmentationLevelSetImageFilter.h"

namespace itk
{
template< class TInputImage, class TFeatureImage, class TOutputPixelType >
LaplacianSegmentationLevelSetImageFilter< TInputImage, TFeatureImage,
                                          TOutputPixelType >
::LaplacianSegmentationLevelSetImageFilter()
{
  m_LaplacianFunction = LaplacianFunctionType::New();

  this->SetSegmentationFunction(m_LaplacianFunction);
}

template< class TInputImage, class TFeatureImage, class TOutputPixelType >
void
LaplacianSegmentationLevelSetImageFilter< TInputImage, TFeatureImage,
                                          TOutputPixelType >
::PrintSelf(std::ostream &, Indent) const
{
  //   Superclass::PrintSelf(os, indent);
}
} // end namespace itk

#endif