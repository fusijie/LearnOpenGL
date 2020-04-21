# LearnOpenGL

#### Learning Address.

[English](https://learnopengl.com/)

[中文](https://learnopengl-cn.github.io/)

#### Version Required.

- MacOS: 10.15.4
- Xcode: 11.4 (11E146)
- GLFW: 3.3
- GLAD: 0.1.33
- GLM: 0.9.8.5
- Assimp: 3.1.0


### Project Structure.

```
|-- LearnOpenGL.xcodeproj		---> XCode 项目文件
|-- LearnOpenGL				---> 代码目录
|-- assimp				---> 模型加载库
|-- common				---> 通用代码
	|-- Camera				---> 摄像机类
	|-- Mesh				---> 网格类
	|-- Model				---> 模型类
	|-- Shader				---> 着色器类
	|-- Utils				---> 工具类
|-- glad				---> OpenGL 接口加载器 
|-- glfw				---> OpenGL 的 C 语言库
|-- glm					---> 数学库
|-- stb					---> C/C++ 的文件加载库
	|-- stb_image				---> 图片文件加载库
```


#### Table Of Contents.

- 入门

	- 00-context: 基础环境搭建（GLFW/GLAD），创建窗口，了解 OpenGL 渲染流程。
	- 01-triangle: 创建第一个三角形，了解 VAO，VBO，shader，图形绘制。
	- 02-rectangle: 创建一个矩形，了解 EBO 的使用。
	- 03-uniform: 创建一个随时间变化的三角形，了解 uniform 的使用。
	- 04-layout: 通过 layout 了解如何管理定义顶点数据。
	- 05-updown: 第一次自定义 shader，创建一个上下颠倒的三角形。
	- 06-texture: 第一次使用纹理，创建一个带图片的矩形。
	- 07-mixTexture: 同时使用两张纹理，了解纹理单元。
	- 08-dynamicMixTexture: 通过 uniform 变量动态改变纹理。
	- 09-mirrorTexture: 一个镜像 shader 的纹理示例。
	- 10-waterMirrorTexture: 一个镜像水波纹 shader 的纹理示例。
	- 11-transformations: 了解变形的使用，主要是 glm 库处理位移，旋转，缩放。
	- 12-mvp: 了解坐标系统，5个不同的坐标系，以及坐标系的的变换，model，view，projection 的含义。
	- 13-cube: 创建第一个 带纹理，动态的 3d 物体。
	- 14-manyCube: 循环创建多个 3d 物体，只改变 model 矩阵。
	- 15-controlCube: 通过键盘控制立方体的运动，加深 model 矩阵的了解。
	- 16-circleCamera: 创建一个旋转的 camera，了解 view 矩阵和 projection 矩阵的使用。
	- 17-freeCamera: 创建一个自由的 camera，加深 view 矩阵和 projection 矩阵的了解。
	- 18-cameraClass: 抽象 camera 类，单独管理。
	
- 光照

	- 19-color: 创建一个光照场景，使用颜色来简单模拟光照原理。
	- 20-light: 了解冯氏光照模型，在 fragment shader 中使用光照三分量叠加计算。
	- 21-material: 创建动态光照场景，引入材质和光属性，也是第一次在 shader 中使用结构体。
	- 22-diffuseMap: 了解漫反射贴图的使用。
	- 23-specularMap: 了解镜面光贴图的使用，着重高光的展示。
	- 24-gouraudLight: 了解 Gouraud 着色效果，在 vertex shader 中处理光照，对比和冯氏光照的区别。
	- 25-directionLight: 了解平行光的原理和使用。
	- 26-pointLight: 了解点光源的原理和使用，以及衰减的计算方式。
	- 27-spotLight: 了解聚光的原理和使用。
	- 28-flashLight: 实现一个手电筒，也就是一个位于观察者位置的聚光，同时对边缘进行软化处理。
	- 29-multiLight: 多光源混合的效果，了解到通过不同的参数可以实现丰富的光照视觉效果。

- 模型加载

	- 30-model: 引入 assimp 库实现 obj 模型的加载。抽象 model 类，处理 mesh 的初始化及渲染，以及纹理的加载优化。
	
- 高级 OpenGL

	- 31-depthTest: 了解深度测试的使用以及如何解决深度冲突。
	- 32-stencilTest: 通过绘制物体外轮廓，了解模板测试的使用。
	- 33-blendDiscard: 了解丢弃片段的使用，绘制带有透明信息的纹理。
	- 34-blendSort: 了解混合的原理和计算方式，渲染半透明的纹理，同时学习如何对物体进行正确的手动排序渲染。
	- 35-cullingFace: 绘制内部不渲染的箱子，了解面剔除的原理，优化渲染性能。
	- 36-framebuffer: 创建自定义的帧缓冲，了解离屏渲染的原理，为后期处理做准备。
	- 37-postProcess: 几个后期处理的示例。
		- inversion: 反相
		- grayscale: 灰度
		- sharpen: 锐化
		- blur: 模糊
		- edge: 边缘检测
	- 38-skybox: 通过天空盒的绘制，了解立方体贴图的使用和优化。
	- 39-reflection: 了解环境映射的反射现象，原理及计算方式。
	- 40-refraction: 了解环境映射的折射现象，原理及计算方式，可以使用类玻璃效果。
	- 41-uniformBufferObject: 了解 UBO 的原理及布局方式，以及如何使用。
	- 42-geometryShader: 接触几何着色器，了解几何着色器的应用场景。
		- normal: 默认几何着色器
		- line: 绘制线段的几何着色器
		- house: 绘制多个三角形的几何着色器
	- 43-implode: 使用几何着色器通过绘制顶点的法向量绘制爆破物体效果。
	- 44-normalVisualization: 使用几何着色器绘制模型的法向量，实现调试的作用。
	- 45-instancing: 使用实例化的方式实现大量物体的渲染，减少 cpu 到 gpu 的数据提交，提高性能。
	- 46-instancedArray: 使用实例化数组绘制的方式实现大量物体的渲染。
	- 47-planets: 未优化前行星和岩石的绘制。
	- 48-planetsInstancing: 使用实例化数组的方式绘制行星和岩石。
	- 49-mutilSampling: 了解抗锯齿和多重采样的原理，开启多重采样绘制立方体。
	- 50-offScreenMMSA: 
	
	
	
	
	
	
	
	
	
	
