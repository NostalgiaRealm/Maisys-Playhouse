
/* ==== __break @ 00413fb4 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00413fb4-00413fb4
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


