
/* ==== __break @ 0048eccd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048eccd-0048eccd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


