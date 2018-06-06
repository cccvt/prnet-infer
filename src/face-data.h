#ifndef PRNET_INFER_FACE_DATA_H_
#define PRNET_INFER_FACE_DATA_H_

#include <vector>
#include <string>

namespace prnet {

struct FaceData {

  std::vector<uint32_t> uv_kpt_indices; // 2 x 68. uv-data/uv_kpt_ind.txt
  std::vector<uint32_t> face_indices; // uv-data/face_idx.txt
  std::vector<uint32_t> triangles; // # of triangles * xyz. uv-data/triangles.txt

};

///
/// Load face data(indices, triangles, uv_kpt)
///
bool LoadFaceData(const std::string &datapath, FaceData *face_data);

} // namespace prnet

#endif // PRNETR_INFER_FACE_DATA_H_
