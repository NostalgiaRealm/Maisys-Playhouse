
/* ==== __break @ 1401200b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401200b-1401200b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


