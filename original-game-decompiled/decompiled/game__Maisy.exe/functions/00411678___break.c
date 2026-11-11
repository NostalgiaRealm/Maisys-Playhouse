
/* ==== __break @ 00411678 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00411678-00411678
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


