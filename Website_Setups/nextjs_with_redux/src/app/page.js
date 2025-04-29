"use client"

import Count from "@/Components/Count";
import { decrement, increment } from "@/lib/store/features/counter/counterSlice";
import { useAppDispatch, useAppSelector } from "@/lib/store/hooks/hooks";

export default function Home() {
  const dispatch = useAppDispatch();
  const count = useAppSelector((state) => state.counter.value)

  return (
    <main className="flex min-h-screen flex-col items-center justify-normal p-24">
      <div className="flex gap-20">
        <h3 className="bg-slate-400 px-10 py-5 rounded-lg">COUNT in ROOT Component -- {count}</h3>
        <Count />
      </div>

      <div className="inline-flex my-10">
        <button onClick={() => dispatch(decrement())} className="bg-gray-600 hover:bg-gray-700 text-gray-200 font-bold py-2 px-4 rounded-l mx-10">-</button>
        <button onClick={() => dispatch(increment())} className="bg-gray-600 hover:bg-gray-700 text-gray-200 font-bold py-2 px-4 rounded-r mx-10">+</button>
      </div>
    </main>
  );
}
