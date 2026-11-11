
/* ==== __break @ 00430ac9 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00430ac9-00430ac9
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


