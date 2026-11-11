
/* ==== __break @ 00411218 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00411218-00411218
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


