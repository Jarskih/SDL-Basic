#pragma once
namespace jarski
{
	struct Particle
	{
	public:
		double m_x;
		double m_y;
	private:
		double m_speed;
		double m_direction;

	public:
		Particle();
		virtual ~Particle();
		void update(int interval);
	private:
		void Init();
	};
}