
/* ==== __break @ 00430678 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00430678-00430678
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


