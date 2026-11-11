
/* ==== __break @ 14008a03 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008a03-14008a03
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


