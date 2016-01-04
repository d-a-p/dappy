#pragma once
#include<GL\glew.h>


namespace dappy {
	namespace graphics {

		class IndexBuffer {
		private:
			GLuint m_BufferId;
			GLuint m_Count;
		public:

			IndexBuffer(GLushort*data, GLsizei count);
			~IndexBuffer();
			void bind()  const;
			void unbind() const;
			GLuint getCount() const { return m_Count; }
		};


	}
}
