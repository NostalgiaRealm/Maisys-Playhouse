
/* ==== __break @ 14020c5b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020c5b-14020c5b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


