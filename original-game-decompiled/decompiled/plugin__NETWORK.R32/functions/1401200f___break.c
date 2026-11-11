
/* ==== __break @ 1401200f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401200f-1401200f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


