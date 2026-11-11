
/* ==== __break @ 004667eb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004667eb-004667eb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


