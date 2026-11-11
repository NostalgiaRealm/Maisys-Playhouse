
/* ==== __break @ 1401a76f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a76f-1401a76f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


