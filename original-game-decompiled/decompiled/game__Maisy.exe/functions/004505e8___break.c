
/* ==== __break @ 004505e8 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004505e8-004505e8
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


