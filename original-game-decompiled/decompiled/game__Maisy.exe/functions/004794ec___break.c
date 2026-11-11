
/* ==== __break @ 004794ec ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004794ec-004794ec
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


