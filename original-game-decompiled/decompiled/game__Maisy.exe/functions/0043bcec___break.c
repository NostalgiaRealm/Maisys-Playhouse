
/* ==== __break @ 0043bcec ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043bcec-0043bcec
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


