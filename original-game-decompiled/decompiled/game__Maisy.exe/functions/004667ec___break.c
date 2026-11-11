
/* ==== __break @ 004667ec ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004667ec-004667ec
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


