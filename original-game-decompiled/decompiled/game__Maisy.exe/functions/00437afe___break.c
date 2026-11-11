
/* ==== __break @ 00437afe ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00437afe-00437afe
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


