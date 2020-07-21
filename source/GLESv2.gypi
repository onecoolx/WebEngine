# HTML5 runtime
#
# Copyright (C) 2015 Zhang Ji Peng
# Contact: onecoolx@gmail.com

{
  'variables': {
    'lib_dir': 'webkit-2.2.8/Source/ThirdParty/ANGLE',
  },
  'target_name': 'GLESv2',
  'type': 'shared_library',
  'dependencies': [
    'translator',
  ],
  'defines': [
    'NOMINMAX',
  ],
  'include_dirs': [
    '<(lib_dir)/include',
    '<(lib_dir)/src',
    '<(lib_dir)/src/libGLESv2',
    '$(DXSDK_DIR)/include',
  ],
  'sources': [
    '<(lib_dir)/src/third_party/murmurhash/MurmurHash3.h',
    '<(lib_dir)/src/third_party/murmurhash/MurmurHash3.cpp',
    '<(lib_dir)/src/third_party/trace_event/trace_event.h',
    '<(lib_dir)/src/common/angleutils.h',
    '<(lib_dir)/src/common/debug.cpp',
    '<(lib_dir)/src/common/debug.h',
    '<(lib_dir)/src/common/event_tracer.cpp',
    '<(lib_dir)/src/common/event_tracer.h',
    '<(lib_dir)/src/common/RefCountObject.cpp',
    '<(lib_dir)/src/common/RefCountObject.h',
    '<(lib_dir)/src/common/version.h',
    '<(lib_dir)/src/libGLESv2/precompiled.h',
    '<(lib_dir)/src/libGLESv2/precompiled.cpp',
    '<(lib_dir)/src/libGLESv2/BinaryStream.h',
    '<(lib_dir)/src/libGLESv2/Buffer.cpp',
    '<(lib_dir)/src/libGLESv2/Buffer.h',
    '<(lib_dir)/src/libGLESv2/Context.cpp',
    '<(lib_dir)/src/libGLESv2/Context.h',
    '<(lib_dir)/src/libGLESv2/angletypes.h',
    '<(lib_dir)/src/libGLESv2/Fence.cpp',
    '<(lib_dir)/src/libGLESv2/Fence.h',
    '<(lib_dir)/src/libGLESv2/Float16ToFloat32.cpp',
    '<(lib_dir)/src/libGLESv2/Framebuffer.cpp',
    '<(lib_dir)/src/libGLESv2/Framebuffer.h',
    '<(lib_dir)/src/libGLESv2/HandleAllocator.cpp',
    '<(lib_dir)/src/libGLESv2/HandleAllocator.h',
    '<(lib_dir)/src/libGLESv2/libGLESv2.cpp',
    '<(lib_dir)/src/libGLESv2/libGLESv2.def',
    '<(lib_dir)/src/libGLESv2/libGLESv2.rc',
    '<(lib_dir)/src/libGLESv2/main.cpp',
    '<(lib_dir)/src/libGLESv2/main.h',
    '<(lib_dir)/src/libGLESv2/mathutil.h',
    '<(lib_dir)/src/libGLESv2/Program.cpp',
    '<(lib_dir)/src/libGLESv2/Program.h',
    '<(lib_dir)/src/libGLESv2/ProgramBinary.cpp',
    '<(lib_dir)/src/libGLESv2/ProgramBinary.h',
    '<(lib_dir)/src/libGLESv2/Query.h',
    '<(lib_dir)/src/libGLESv2/Query.cpp',
    '<(lib_dir)/src/libGLESv2/Renderbuffer.cpp',
    '<(lib_dir)/src/libGLESv2/Renderbuffer.h',
    '<(lib_dir)/src/libGLESv2/renderer/Blit.cpp',
    '<(lib_dir)/src/libGLESv2/renderer/Blit.h',
    '<(lib_dir)/src/libGLESv2/renderer/BufferStorage.h',
    '<(lib_dir)/src/libGLESv2/renderer/BufferStorage.cpp',
    '<(lib_dir)/src/libGLESv2/renderer/BufferStorage9.cpp',
    '<(lib_dir)/src/libGLESv2/renderer/BufferStorage9.h',
    '<(lib_dir)/src/libGLESv2/renderer/BufferStorage11.cpp',
    '<(lib_dir)/src/libGLESv2/renderer/BufferStorage11.h',
    '<(lib_dir)/src/libGLESv2/renderer/FenceImpl.h',
    '<(lib_dir)/src/libGLESv2/renderer/Fence9.cpp',
    '<(lib_dir)/src/libGLESv2/renderer/Fence9.h',
    '<(lib_dir)/src/libGLESv2/renderer/Fence11.cpp',
    '<(lib_dir)/src/libGLESv2/renderer/Fence11.h',
    '<(lib_dir)/src/libGLESv2/renderer/generatemip.h',
    '<(lib_dir)/src/libGLESv2/renderer/Image.cpp',
    '<(lib_dir)/src/libGLESv2/renderer/Image.h',
    '<(lib_dir)/src/libGLESv2/renderer/Image11.cpp',
    '<(lib_dir)/src/libGLESv2/renderer/Image11.h',
    '<(lib_dir)/src/libGLESv2/renderer/Image9.cpp',
    '<(lib_dir)/src/libGLESv2/renderer/Image9.h',
    '<(lib_dir)/src/libGLESv2/renderer/ImageSSE2.cpp',
    '<(lib_dir)/src/libGLESv2/renderer/IndexBuffer.cpp',
    '<(lib_dir)/src/libGLESv2/renderer/IndexBuffer.h',
    '<(lib_dir)/src/libGLESv2/renderer/IndexBuffer9.cpp',
    '<(lib_dir)/src/libGLESv2/renderer/IndexBuffer9.h',
    '<(lib_dir)/src/libGLESv2/renderer/IndexBuffer11.cpp',
    '<(lib_dir)/src/libGLESv2/renderer/IndexBuffer11.h',
    '<(lib_dir)/src/libGLESv2/renderer/IndexDataManager.cpp',
    '<(lib_dir)/src/libGLESv2/renderer/IndexDataManager.h',
    '<(lib_dir)/src/libGLESv2/renderer/IndexRangeCache.cpp',
    '<(lib_dir)/src/libGLESv2/renderer/IndexRangeCache.h',
    '<(lib_dir)/src/libGLESv2/renderer/InputLayoutCache.cpp',
    '<(lib_dir)/src/libGLESv2/renderer/InputLayoutCache.h',
    '<(lib_dir)/src/libGLESv2/renderer/QueryImpl.h',
    '<(lib_dir)/src/libGLESv2/renderer/Query9.cpp',
    '<(lib_dir)/src/libGLESv2/renderer/Query9.h',
    '<(lib_dir)/src/libGLESv2/renderer/Query11.cpp',
    '<(lib_dir)/src/libGLESv2/renderer/Query11.h',
    '<(lib_dir)/src/libGLESv2/renderer/Renderer.cpp',
    '<(lib_dir)/src/libGLESv2/renderer/Renderer.h',
    '<(lib_dir)/src/libGLESv2/renderer/Renderer11.cpp',
    '<(lib_dir)/src/libGLESv2/renderer/Renderer11.h',
    '<(lib_dir)/src/libGLESv2/renderer/renderer11_utils.cpp',
    '<(lib_dir)/src/libGLESv2/renderer/renderer11_utils.h',
    '<(lib_dir)/src/libGLESv2/renderer/Renderer9.cpp',
    '<(lib_dir)/src/libGLESv2/renderer/Renderer9.h',
    '<(lib_dir)/src/libGLESv2/renderer/renderer9_utils.cpp',
    '<(lib_dir)/src/libGLESv2/renderer/renderer9_utils.h',
    '<(lib_dir)/src/libGLESv2/renderer/RenderStateCache.cpp',
    '<(lib_dir)/src/libGLESv2/renderer/RenderStateCache.h',
    '<(lib_dir)/src/libGLESv2/renderer/RenderTarget.h',
    '<(lib_dir)/src/libGLESv2/renderer/RenderTarget11.h',
    '<(lib_dir)/src/libGLESv2/renderer/RenderTarget11.cpp',
    '<(lib_dir)/src/libGLESv2/renderer/RenderTarget9.h',
    '<(lib_dir)/src/libGLESv2/renderer/RenderTarget9.cpp',
    '<(lib_dir)/src/libGLESv2/renderer/ShaderCache.h',
    '<(lib_dir)/src/libGLESv2/renderer/ShaderExecutable.h',
    '<(lib_dir)/src/libGLESv2/renderer/ShaderExecutable9.cpp',
    '<(lib_dir)/src/libGLESv2/renderer/ShaderExecutable9.h',
    '<(lib_dir)/src/libGLESv2/renderer/ShaderExecutable11.cpp',
    '<(lib_dir)/src/libGLESv2/renderer/ShaderExecutable11.h',
    '<(lib_dir)/src/libGLESv2/renderer/SwapChain.h',
    '<(lib_dir)/src/libGLESv2/renderer/SwapChain9.cpp',
    '<(lib_dir)/src/libGLESv2/renderer/SwapChain9.h',
    '<(lib_dir)/src/libGLESv2/renderer/SwapChain11.cpp',
    '<(lib_dir)/src/libGLESv2/renderer/SwapChain11.h',
    '<(lib_dir)/src/libGLESv2/renderer/TextureStorage.cpp',
    '<(lib_dir)/src/libGLESv2/renderer/TextureStorage.h',
    '<(lib_dir)/src/libGLESv2/renderer/TextureStorage11.cpp',
    '<(lib_dir)/src/libGLESv2/renderer/TextureStorage11.h',
    '<(lib_dir)/src/libGLESv2/renderer/TextureStorage9.cpp',
    '<(lib_dir)/src/libGLESv2/renderer/TextureStorage9.h',
    '<(lib_dir)/src/libGLESv2/renderer/VertexBuffer.cpp',
    '<(lib_dir)/src/libGLESv2/renderer/VertexBuffer.h',
    '<(lib_dir)/src/libGLESv2/renderer/VertexBuffer9.cpp',
    '<(lib_dir)/src/libGLESv2/renderer/VertexBuffer9.h',
    '<(lib_dir)/src/libGLESv2/renderer/VertexBuffer11.cpp',
    '<(lib_dir)/src/libGLESv2/renderer/VertexBuffer11.h',
    '<(lib_dir)/src/libGLESv2/renderer/vertexconversion.h',
    '<(lib_dir)/src/libGLESv2/renderer/VertexDataManager.cpp',
    '<(lib_dir)/src/libGLESv2/renderer/VertexDataManager.h',
    '<(lib_dir)/src/libGLESv2/renderer/VertexDeclarationCache.cpp',
    '<(lib_dir)/src/libGLESv2/renderer/VertexDeclarationCache.h',
    '<(lib_dir)/src/libGLESv2/ResourceManager.cpp',
    '<(lib_dir)/src/libGLESv2/ResourceManager.h',
    '<(lib_dir)/src/libGLESv2/Shader.cpp',
    '<(lib_dir)/src/libGLESv2/Shader.h',
    '<(lib_dir)/src/libGLESv2/Texture.cpp',
    '<(lib_dir)/src/libGLESv2/Texture.h',
    '<(lib_dir)/src/libGLESv2/Uniform.cpp',
    '<(lib_dir)/src/libGLESv2/Uniform.h',
    '<(lib_dir)/src/libGLESv2/utilities.cpp',
    '<(lib_dir)/src/libGLESv2/utilities.h',
    '<(lib_dir)/src/libGLESv2/libGLESv2.def',
    '<(lib_dir)/src/libGLESv2/libGLESv2.rc',
  ],
  'libraries': [
    '-ld3d11',
    '-ld3d9',
    '-ldxguid',
  ],
  'msvs_disabled_warnings': [ 4267, 4996 ],
  'includes': [
    '../build/configs.gypi',
    '../build/defines.gypi',
  ],
}
