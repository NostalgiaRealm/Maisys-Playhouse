
/* ==== __break @ 0040fccd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040fccd-0040fccd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


