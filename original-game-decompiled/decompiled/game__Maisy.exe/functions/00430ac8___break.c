
/* ==== __break @ 00430ac8 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00430ac8-00430ac8
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


