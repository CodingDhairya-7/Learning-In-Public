import Image from "next/image";

export default function Home() {
  return (
    <div className="container my-5">
      I am home.
      <Image className="mx-auto" src="https://i.ytimg.com/vi/xZJcJ6QRvfY/maxresdefault.jpg" alt="" width={500} height={500} />
    </div>
  );
}
